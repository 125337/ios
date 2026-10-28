@interface BoundaryArg : NSObject
{
    unsigned int _up_bound; // +0x8
    unsigned int _low_bound; // +0xc
    unsigned int _arg_value; // +0x10
}
- (unsigned int)up_bound;
- (void)setUp_bound:(unsigned int)arg1;
- (unsigned int)low_bound;
- (void)setLow_bound:(unsigned int)arg1;
- (unsigned int)arg_value;
- (void)setArg_value:(unsigned int)arg1;
@end
