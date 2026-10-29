@interface TextState3rdPartyFinderHandler : TextState3rdPartyBaseHandler
{
    unsigned long long _dataStatus; // +0x8
    WCFinderDataItem * _dataItem; // +0x10
    StatusFooterJumpFinderFeed * _jumpInfo; // +0x18
}
- (BOOL)supportCustomMedia;
- (id)initWithBuffer:(id)arg1 keyBuffer:(id)arg2;
- (id)getLocalDataItemWtihTid:(id)arg1;
- (void)setDataItem:(id)arg1;
- (unsigned int)type;
- (id)title;
- (id)headImageView;
- (BOOL)preferCustomView;
- (id)customView;
- (id)name;
- (BOOL)useCoverForContent;
- (BOOL)doSourceActionWithViewController:(id)arg1 scene:(unsigned int)arg2;
- (BOOL)doHeadImageActionWithViewController:(id)arg1;
- (id)genReportExtInfo;
- (id)mediaContentView;
- (id)mediaCoverView;
- (BOOL)autoHandleAppLifeCycleEvent;
- (BOOL)allowReferBackground;
- (id)mediaDescription;
- (id)reportActivityId;
- (void)checkValidWithCompletionBlock:(id /* block */)arg1 cacheOnly:(BOOL)arg2;
- (id)updateBizData;
- (BOOL)needUpdateBizData;
- (BOOL)dataReady;
- (BOOL)isValid;
- (BOOL)canGetSourceInfoForRefer;
- (void)getSourceInfoForReferWithCompletionBlock:(id /* block */)arg1;
- (BOOL)syncCheckValidStatus;
- (id)invalidMessage;
- (BOOL)_isLimitedByFinderYoungStyle;
- (unsigned long long)dataStatus;
- (void)setDataStatus:(unsigned long long)arg1;
- (id)dataItem;
- (id)jumpInfo;
- (void)setJumpInfo:(id)arg1;
- (void).cxx_destruct;
@end

