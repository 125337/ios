@interface MMLiteAppUDRCheckMgr : IUdrBizFeature
{
    NSArray * _liteAppProjectIdList; // +0x8
}
+ (id)configCheckParameters;
- (id)getProjectId;
- (id)getProjectIdList;
- (BOOL)addToPeriod;
- (id)getParameter;
- (void)postProcess:(id)arg1;
- (void)haveSpecifiedResource:(id)arg1 name:(id)arg2 version:(unsigned int)arg3;
- (id)liteAppProjectIdList;
- (void)setLiteAppProjectIdList:(id)arg1;
- (void).cxx_destruct;
@end

