@interface FaceRecogPayConfigLogic : MMObject <PBMessageObserverDelegate>
{
    NSString * _actionBioId; // +0x8
    NSString * _actionData; // +0x10
    double _reductionRatio; // +0x18
    NSString * _takeMessage; // +0x20
    NSString * _actionHint; // +0x28
    NSString * _colorData; // +0x30
    NSData * _selectData; // +0x38
    unsigned long long _reflectBioId; // +0x40
    BOOL _useHttp; // +0x48
    unsigned int _scene; // +0x4c
    unsigned int _check_live_type; // +0x50
    unsigned int _interrupt_ret; // +0x54
    id <FaceRecogPayConfigLogicDelegate> _delegate; // +0x58
    NSString * _package; // +0x60
    NSString * _package_sign; // +0x68
    NSString * _interrupt_msg; // +0x70
}
- (void)resetConfig;
- (id)getBioId;
- (unsigned long long)getReflectBioId;
- (id)getActionData;
- (double)reductionRatio;
- (id)takeMessage;
- (id)actionHint;
- (id)getColorData;
- (id)getSelectData;
- (BOOL)startGetBioConfig:(id)arg1;
- (BOOL)startGetFaceCheckActionUseHttp:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)package;
- (void)setPackage:(id)arg1;
- (id)package_sign;
- (void)setPackage_sign:(id)arg1;
- (unsigned int)scene;
- (void)setScene:(unsigned int)arg1;
- (unsigned int)check_live_type;
- (void)setCheck_live_type:(unsigned int)arg1;
- (unsigned int)interrupt_ret;
- (void)setInterrupt_ret:(unsigned int)arg1;
- (id)interrupt_msg;
- (void)setInterrupt_msg:(id)arg1;
- (BOOL)useHttp;
- (void)setUseHttp:(BOOL)arg1;
- (void).cxx_destruct;
@end

