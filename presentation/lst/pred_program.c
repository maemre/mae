void example() {
  do {
    lock();
    $\uncover<2->{\alert<2>{\texttt{lock\_return();}}}$
    nPacketsOld = nPackets;
    req = devExt->WLHV;
    if (req && req.status) {
      devExt->WLHV = req->Next; 
      unlock();
      $\uncover<2->{\alert<2>{\texttt{unlock\_return();}}}$
      irp = req->irp; 
      if(req->status > 0){ 
        irp->IoS.Status = SUCCESS; 
        irp->IoS.Info = req->Status; 
      } else { 
        irp->IoS.Status = FAIL; 
        irp->IoS.Info = req->Status; 
      } 
      SmartDevFreeBlock(req); 
      IoCompleteRequest(irp); 
      nPackets++; 
    } 
  } while (nPackets != nPacketsOld);
  unlock();
  $\uncover<2->{\alert<2>{\texttt{unlock\_return();}}}$
}
