@interface OVCLTPropertyResolvingParam : NSObject
{
    int _layerID; // +0x8
    unsigned long long _lowerThirdProperty; // +0x10
    NSString * _lowerThirdID; // +0x18
    NSString * _segmentID; // +0x20
    NSString * _textTemplate; // +0x28
    NSDictionary * _context; // +0x30
}
- (id)initWithLowerThirdProperty:(unsigned long long)arg1 LowerThirdID:(id)arg2 segmentID:(id)arg3 layerID:(int)arg4 textTemplate:(id)arg5 context:(id)arg6;
- (unsigned long long)lowerThirdProperty;
- (id)lowerThirdID;
- (id)segmentID;
- (int)layerID;
- (id)textTemplate;
- (id)context;
- (void).cxx_destruct;
@end
