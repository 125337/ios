@interface WXKBMessageActionContext : NSObject
{
    MMUIViewController * _viewController; // +0x8
    CContact * _contact; // +0x10
}
- (BOOL)isValid;
- (id)description;
- (id)viewController;
- (void)setViewController:(id)arg1;
- (id)contact;
- (void)setContact:(id)arg1;
- (void).cxx_destruct;
@end

