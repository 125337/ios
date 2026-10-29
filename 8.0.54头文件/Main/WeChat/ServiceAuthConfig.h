@interface ServiceAuthConfig : NSObject
{
    unsigned int _scene; // +0x8
    NSArray * _authServices; // +0x10
    NSArray * _noAuthServices; // +0x18
    NSString * _title; // +0x20
    NSString * _content; // +0x28
    NSString * _loadingRequestSuccessText; // +0x30
    NSArray * _contentArgs; // +0x38
    NSString * _titleForCancelBtn; // +0x40
    UIColor * _titleColorForCancelBtn; // +0x48
    NSString * _titleForConfirmBtn; // +0x50
    UIColor * _colorForConfirmBtn; // +0x58
    id _attachInfo; // +0x60
    id /* block */ _resultBlock; // +0x68
}
- (id)init;
- (id)initForOpenStyle;
- (id)initForCloseStyle;
- (void)updateIfNeed;
- (id)authServices;
- (void)setAuthServices:(id)arg1;
- (id)noAuthServices;
- (void)setNoAuthServices:(id)arg1;
- (unsigned int)scene;
- (void)setScene:(unsigned int)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)content;
- (void)setContent:(id)arg1;
- (id)loadingRequestSuccessText;
- (void)setLoadingRequestSuccessText:(id)arg1;
- (id)contentArgs;
- (void)setContentArgs:(id)arg1;
- (id)titleForCancelBtn;
- (void)setTitleForCancelBtn:(id)arg1;
- (id)titleColorForCancelBtn;
- (void)setTitleColorForCancelBtn:(id)arg1;
- (id)titleForConfirmBtn;
- (void)setTitleForConfirmBtn:(id)arg1;
- (id)colorForConfirmBtn;
- (void)setColorForConfirmBtn:(id)arg1;
- (id)attachInfo;
- (void)setAttachInfo:(id)arg1;
- (id /* block */)resultBlock;
- (void)setResultBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end

