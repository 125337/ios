@interface WCFinderPageSection : NSObject
{
    BOOL _continueFlag; // +0x8
    NSData * _lastBuffer; // +0x10
    NSArray * _dataItems; // +0x18
}
- (id)dataItems;
- (BOOL)continueFlag;
- (void)setContinueFlag:(BOOL)arg1;
- (id)lastBuffer;
- (void)setLastBuffer:(id)arg1;
- (void)setDataItems:(id)arg1;
- (void).cxx_destruct;
@end
