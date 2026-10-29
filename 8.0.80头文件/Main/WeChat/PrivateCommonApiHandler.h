@interface PrivateCommonApiHandler : NSObject
{
    id <PrivateCommonApiHandlerDelegate> _delegate; // +0x8
}
- (void)handleCommonApiWithParams:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end
