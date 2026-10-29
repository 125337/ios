@interface WASubscriptionMessageDataReporter : MMObject
{
    unsigned long long _scene; // +0x8
}
- (void)recordInfoButtonClickedAtIndex:(unsigned long long)arg1 viewModel:(id)arg2;
- (void)reportUserOperationWithViewModel:(id)arg1;
- (unsigned long long)scene;
- (void)setScene:(unsigned long long)arg1;
@end

