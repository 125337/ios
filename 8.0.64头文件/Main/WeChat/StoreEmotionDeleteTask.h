@interface StoreEmotionDeleteTask : StoreEmotionNotifyTask
{
    NSString * _productID; // +0x8
    id <StoreEmotionDeleteTaskDelegate> _delegate; // +0x10
}
- (id)initWithProductID:(id)arg1 andDelegate:(id)arg2;
- (BOOL)resumeLogic;
- (id)productID;
- (void)setProductID:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end
