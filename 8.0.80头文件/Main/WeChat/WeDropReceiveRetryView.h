@interface WeDropReceiveRetryView : WeDropBaseView <WeDropStopWithRetryFooterDelegate, WeDropStopFooterDelegate>
{
    NSString * _title; // +0x8
    NSString * _desc; // +0x10
}
- (id)initWithTitle:(id)arg1 desc:(id)arg2;
- (void)initSubviews;
- (void)onStopTapped;
- (void)onRetryTapped;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)desc;
- (void)setDesc:(id)arg1;
- (void).cxx_destruct;
@end
