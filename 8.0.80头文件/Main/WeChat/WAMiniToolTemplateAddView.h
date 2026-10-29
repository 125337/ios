@interface WAMiniToolTemplateAddView : UIView
{
    BOOL _isLoading; // +0x8
    NSString * _descText; // +0x10
    id /* block */ _cancelBlock; // +0x18
    id /* block */ _addBlock; // +0x20
    id /* block */ _addingToastExposeBlock; // +0x28
    UILabel * _titleLabel; // +0x30
    UILabel * _descLabel; // +0x38
    UIButton * _cancelButton; // +0x40
    UIButton * _addButton; // +0x48
    UIView * _loadingContainer; // +0x50
    SightIconView * _loadingIcon; // +0x58
    UILabel * _loadingLabel; // +0x60
}
- (id)initWithDescText:(id)arg1;
- (id)descTextOrDefault;
- (double)contentHeightForWidth:(double)arg1;
- (double)textHeight:(id)arg1 font:(id)arg2 maxWidth:(double)arg3 lineSpacing:(double)arg4;
- (void)setupUI;
- (void)enterLoadingState;
- (void)exitLoadingState;
- (void)onCancelButtonClick;
- (void)onAddButtonClick;
- (void)performConfirmAction:(id /* block */)arg1;
- (id)descText;
- (id /* block */)cancelBlock;
- (void)setCancelBlock:(id /* block */)arg1;
- (id /* block */)addBlock;
- (void)setAddBlock:(id /* block */)arg1;
- (id /* block */)addingToastExposeBlock;
- (void)setAddingToastExposeBlock:(id /* block */)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)descLabel;
- (void)setDescLabel:(id)arg1;
- (id)cancelButton;
- (void)setCancelButton:(id)arg1;
- (id)addButton;
- (void)setAddButton:(id)arg1;
- (id)loadingContainer;
- (void)setLoadingContainer:(id)arg1;
- (id)loadingIcon;
- (void)setLoadingIcon:(id)arg1;
- (id)loadingLabel;
- (void)setLoadingLabel:(id)arg1;
- (BOOL)isLoading;
- (void)setIsLoading:(BOOL)arg1;
- (void).cxx_destruct;
@end
