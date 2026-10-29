@interface WCAddressFrame : NSObject
{
    const char * m_symbolName; // +0x8
    unsigned int _repeatCount; // +0x10
    unsigned long long _address; // +0x18
    NSMutableArray * _childAddressFrame; // +0x20
}
- (id)initWithAddress:(unsigned long long)arg1 withRepeatCount:(unsigned int)arg2;
- (void)addChildFrame:(id)arg1;
- (id)getInfoDict;
- (id)makeInfoDict;
- (void)symbolicate;
- (id)tryFoundAddressFrameWithAddress:(unsigned long long)arg1;
- (id)description;
- (id)descriptionWithDeep:(int)arg1;
- (unsigned long long)address;
- (void)setAddress:(unsigned long long)arg1;
- (unsigned int)repeatCount;
- (void)setRepeatCount:(unsigned int)arg1;
- (id)childAddressFrame;
- (void)setChildAddressFrame:(id)arg1;
- (void).cxx_destruct;
@end
