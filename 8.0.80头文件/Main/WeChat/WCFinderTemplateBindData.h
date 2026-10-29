@interface WCFinderTemplateBindData : NSObject
{
    BOOL _isOnlyPreview; // +0x8
    WCFinderTemplatePublishParams * _params; // +0x10
}
- (id)params;
- (void)setParams:(id)arg1;
- (BOOL)isOnlyPreview;
- (void)setIsOnlyPreview:(BOOL)arg1;
- (void).cxx_destruct;
@end
