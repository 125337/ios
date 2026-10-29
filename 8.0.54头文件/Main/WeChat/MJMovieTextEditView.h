@interface MJMovieTextEditView : MMUIView
{
    id <MJMovieTextEditViewDelegate> _delegate; // +0x8
    unsigned long long _style; // +0x10
    MJMovieTextButton * _textButton; // +0x18
    MJMovieDeleteButton * _deleteButton; // +0x20
    NSString * _placeholder; // +0x28
}
- (id)initWithStyle:(unsigned long long)arg1;
- (void)setupViews;
- (void)setPlaceholder:(id)arg1;
- (id)displayingText;
- (void)setDisplayingText:(id)arg1;
- (void)resetDisplayingText;
- (id)textButton;
- (void)handleSelectEditText:(id)arg1;
- (id)deleteButton;
- (void)handleSelectDelete:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (unsigned long long)style;
- (void)setStyle:(unsigned long long)arg1;
- (void)setTextButton:(id)arg1;
- (void)setDeleteButton:(id)arg1;
- (id)placeholder;
- (void).cxx_destruct;
@end

