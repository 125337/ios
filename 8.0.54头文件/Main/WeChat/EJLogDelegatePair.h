@interface EJLogDelegatePair : NSObject
{
    int _referCount; // +0x8
    id <EJNativeLogViewDelegate> _delegate; // +0x10
}
- (id)initWithDelegate:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (int)referCount;
- (void)setReferCount:(int)arg1;
- (void).cxx_destruct;
@end

