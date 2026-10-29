@interface LiveURLiveInfoServiceCpp : UnitRCObjcBaseProxyClass <LiveURLiveInfoService>
- (void)requestLiveInfo:(id)arg1 callback:(id /* block */)arg2;
- (void)fetchLiveInfo:(id)arg1 liveId:(unsigned long long)arg2 scene:(unsigned int)arg3 enableCache:(BOOL)arg4 callback:(id /* block */)arg5;
- (void)updateLiveStatus:(unsigned long long)arg1 status:(unsigned int)arg2;
- (unsigned int)getLiveStatus:(unsigned long long)arg1;
@end
