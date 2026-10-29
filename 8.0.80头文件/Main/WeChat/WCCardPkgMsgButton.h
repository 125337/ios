@interface WCCardPkgMsgButton : NSObject
{
    unsigned int actionType; // +0x8
    NSString * actionText; // +0x10
    NSString * actionUrl; // +0x18
}
- (BOOL)IsActionValid;
- (unsigned int)actionType;
- (void)setActionType:(unsigned int)arg1;
- (id)actionText;
- (void)setActionText:(id)arg1;
- (id)actionUrl;
- (void)setActionUrl:(id)arg1;
- (void).cxx_destruct;
@end
