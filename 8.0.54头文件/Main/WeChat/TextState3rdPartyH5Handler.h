@interface TextState3rdPartyH5Handler : TextState3rdPartyBaseHandler
{
    BOOL _confidence; // +0x8
    NSString * _URLString; // +0x10
}
- (BOOL)supportCustomMedia;
- (id)initWithBuffer:(id)arg1 keyBuffer:(id)arg2;
- (unsigned int)type;
- (BOOL)doSourceActionWithViewController:(id)arg1 scene:(unsigned int)arg2;
- (id)URLString;
- (void)setURLString:(id)arg1;
- (BOOL)confidence;
- (void)setConfidence:(BOOL)arg1;
- (void).cxx_destruct;
@end

