@interface OMJAsyncTTSSubmitRequestInfo : NSObject
{
    float _speed; // +0x8
    float _volume; // +0xc
    NSString * _text; // +0x10
    NSString * _model; // +0x18
    unsigned long long _format; // +0x20
    NSString * _submitID; // +0x28
    NSDictionary * _extraParams; // +0x30
}
- (id)initWithText:(id)arg1 model:(id)arg2 format:(unsigned long long)arg3 speed:(float)arg4 volume:(float)arg5;
- (id)initWithText:(id)arg1 model:(id)arg2 format:(unsigned long long)arg3 speed:(float)arg4 volume:(float)arg5 submitID:(id)arg6 extraParams:(id)arg7;
- (id)text;
- (id)model;
- (unsigned long long)format;
- (float)speed;
- (float)volume;
- (id)submitID;
- (id)extraParams;
- (void).cxx_destruct;
@end

