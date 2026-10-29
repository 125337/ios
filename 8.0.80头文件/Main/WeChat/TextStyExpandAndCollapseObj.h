@interface TextStyExpandAndCollapseObj : NSObject
{
    BOOL _isExpand; // +0x8
    NSString * _truncatedTrailingLinkText; // +0x10
    NSString * _truncatedTrailingLinkUrl; // +0x18
    UIColor * _truncatedTrailingLinkColor; // +0x20
    id <ILinkEventExt> _linkDelegate; // +0x28
}
- (BOOL)isExpand;
- (void)setIsExpand:(BOOL)arg1;
- (id)truncatedTrailingLinkText;
- (void)setTruncatedTrailingLinkText:(id)arg1;
- (id)truncatedTrailingLinkUrl;
- (void)setTruncatedTrailingLinkUrl:(id)arg1;
- (id)truncatedTrailingLinkColor;
- (void)setTruncatedTrailingLinkColor:(id)arg1;
- (id)linkDelegate;
- (void)setLinkDelegate:(id)arg1;
- (void).cxx_destruct;
@end
