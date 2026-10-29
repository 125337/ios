@interface ZipFileAddFavMgr : MMUserService <MMServiceProtocol>
- (void)startAddFavWithFileInfo:(id)arg1 withAppid:(id)arg2 withAppUuId:(unsigned int)arg3 failCallBack:(id /* block */)arg4 successCallBack:(id /* block */)arg5 progressCallBack:(id /* block */)arg6;
@end
