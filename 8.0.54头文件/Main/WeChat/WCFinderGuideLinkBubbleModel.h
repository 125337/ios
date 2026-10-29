@interface WCFinderGuideLinkBubbleModel : NSObject
{
    BOOL _linkStyle; // +0x8
    NSString * _iconUrl; // +0x10
    NSString * _content; // +0x18
}
- (id)iconUrl;
- (void)setIconUrl:(id)arg1;
- (id)content;
- (void)setContent:(id)arg1;
- (BOOL)linkStyle;
- (void)setLinkStyle:(BOOL)arg1;
- (void).cxx_destruct;
@end

