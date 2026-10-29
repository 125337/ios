@interface WCVideoProducerFlavors : WCAudioModuleProxy
{
    BOOL _isPreviewMuteAll; // +0x8
    BOOL _isPreviewOSTEnabled; // +0x9
    BOOL _isPreviewBGMEnabled; // +0xa
}
- (id)initWithOptions:(id)arg1;
- (id)description;
- (BOOL)isPreviewMuteAll;
- (void)setIsPreviewMuteAll:(BOOL)arg1;
- (BOOL)isPreviewOSTEnabled;
- (void)setIsPreviewOSTEnabled:(BOOL)arg1;
- (BOOL)isPreviewBGMEnabled;
- (void)setIsPreviewBGMEnabled:(BOOL)arg1;
@end
