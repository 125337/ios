@interface UrlLabel : MMCPLabel
{
    NSString * _urlString; // +0x8
    NSString * _backupUrlString; // +0x10
    id <ILinkEventExt> _linkDelegate; // +0x18
    BOOL _ignoreHighlight; // +0x20
    UIColor * _normalBackgroundColor; // +0x28
    UIColor * _highlightedBackgroundColor; // +0x30
    BOOL _bTouchEnds; // +0x38
    NSMutableDictionary * _extraInfo; // +0x40
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setUrlString:(id)arg1;
- (void)setNormalColor;
- (void)setHighlightedColor;
- (void)setHighlighted:(BOOL)arg1;
- (void)throwUrlMessage;
- (void)willMoveToSuperview:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (id)extraInfo;
- (void)cancelDelayedTouches;
- (id)urlString;
- (id)backupUrlString;
- (void)setBackupUrlString:(id)arg1;
- (id)linkDelegate;
- (void)setLinkDelegate:(id)arg1;
- (BOOL)ignoreHighlight;
- (void)setIgnoreHighlight:(BOOL)arg1;
- (id)normalBackgroundColor;
- (void)setNormalBackgroundColor:(id)arg1;
- (id)highlightedBackgroundColor;
- (void)setHighlightedBackgroundColor:(id)arg1;
- (void)setExtraInfo:(id)arg1;
- (void).cxx_destruct;
@end

