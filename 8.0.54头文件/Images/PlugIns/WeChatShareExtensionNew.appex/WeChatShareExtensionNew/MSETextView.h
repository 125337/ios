@interface MSETextView : UITextView
{
    BOOL _shouldDrawPlaceholder; // +0x8
    NSString * _placeholder; // +0x10
    UIColor * _placeHolderColor; // +0x18
}
- (id)init;
- (id)initWithFrame:(CGRect)arg1;
- (void)addNotificationObserver;
- (void)dealloc;
- (void)setPlaceholder:(id)arg1;
- (void)setPlaceholderColor:(id)arg1;
- (void)setFont:(id)arg1;
- (void)setText:(id)arg1;
- (void)drawRect:(CGRect)arg1;
- (void)_updateShouldDrawPlaceholder;
- (void)textDidChange:(id)arg1;
- (id)placeholder;
- (id)placeHolderColor;
- (void)setPlaceHolderColor:(id)arg1;
- (BOOL)shouldDrawPlaceholder;
- (void)setShouldDrawPlaceholder:(BOOL)arg1;
- (void).cxx_destruct;
@end

