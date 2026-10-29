@interface MMLiveCameraOperationItem : NSObject
{
    BOOL _disabled; // +0x8
    UIImage * _image; // +0x10
    NSString * _label; // +0x18
    NSString * _secondaryLabel; // +0x20
    NSString * _badgeText; // +0x28
    id /* block */ _action; // +0x30
    NSString * _redDotPath; // +0x38
    NSString * _alternativeRedDotPath; // +0x40
}
- (BOOL)disabled;
- (void)setDisabled:(BOOL)arg1;
- (id)image;
- (void)setImage:(id)arg1;
- (id)label;
- (void)setLabel:(id)arg1;
- (id)secondaryLabel;
- (void)setSecondaryLabel:(id)arg1;
- (id)badgeText;
- (void)setBadgeText:(id)arg1;
- (id /* block */)action;
- (void)setAction:(id /* block */)arg1;
- (id)redDotPath;
- (void)setRedDotPath:(id)arg1;
- (id)alternativeRedDotPath;
- (void)setAlternativeRedDotPath:(id)arg1;
- (void).cxx_destruct;
@end

