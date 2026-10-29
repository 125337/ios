@interface MatrixAdapter : NSObject
{
    id <MatrixAdapterDelegate> _delegate; // +0x8
}
+ (id)sharedInstance;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end

