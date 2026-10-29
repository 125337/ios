@interface BrandTimelineRelatedInfoLogic : MMObject
{
    id <BrandTimelineRelatedInfoLogicDelegate> _delegate; // +0x8
}
- (void)checkAndUpdateVisibleMsgsRelatedInfo;
- (void)checkAndUpdateRelatedInfoWithMsgArr:(id)arg1;
- (id)getPageIdentifierForReaderWrap:(id)arg1;
- (id)getRelatedInfoWithReaderWrap:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end

