@interface WCCanvasComponentVideoFloatBarInfo : MMObject <NSCoding>
{
    BOOL _isFullClickable; // +0x8
    NSString * _descText; // +0x10
    NSString * _descColor; // +0x18
    WCCanvasComponentItem * _actionButton; // +0x20
}
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)descText;
- (void)setDescText:(id)arg1;
- (id)descColor;
- (void)setDescColor:(id)arg1;
- (BOOL)isFullClickable;
- (void)setIsFullClickable:(BOOL)arg1;
- (id)actionButton;
- (void)setActionButton:(id)arg1;
- (void).cxx_destruct;
@end
