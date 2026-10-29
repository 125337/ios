@interface WxpayFileHandleFields : NSObject
{
    NSArray * _inputs; // +0x8
    NSArray * _outputs; // +0x10
}
+ (id)fieldsWithInputs:(id)arg1 outputs:(id)arg2;
+ (id)none;
- (id)initInternal;
- (BOOL)isEmpty;
- (id)inputs;
- (id)outputs;
- (void).cxx_destruct;
@end
