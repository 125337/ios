@interface TXCVideoEncoderSupervisor : NSObject
{
    BOOL _isHardware; // +0x8
    BOOL _isHevc; // +0x9
    BOOL _supportsSoftware; // +0xa
    BOOL _supportsHevc; // +0xb
    BOOL _enablesHevc; // +0xc
    BOOL _enablesRps; // +0xd
    BOOL _hardwareHevcError; // +0xe
    BOOL _hardwareError; // +0xf
    BOOL _enablesRoi; // +0x10
    int _strategy; // +0x14
    TXCDispatchQueue * _queue; // +0x18
    id <TXCVideoEncoderSupervisorDelegate> _delegate; // +0x20
    TXCVideoEncodeConfig * _encodeConfig; // +0x28
}
- (id)initWithQueue:(id)arg1 supportsSoftware:(BOOL)arg2 supportsHevc:(BOOL)arg3 encodeConfig:(id)arg4 delegate:(id)arg5;
- (int)encoderType;
- (int)codecType;
- (void)preferStrategy:(int)arg1;
- (void)enablesHevc:(BOOL)arg1;
- (void)enablesRps:(BOOL)arg1;
- (void)setEncodeUsage:(int)arg1;
- (void)enablesRoi:(BOOL)arg1;
- (void)notifyError:(id)arg1 onComplete:(id /* block */)arg2;
- (BOOL)updateStrategy;
- (BOOL)notifyUseHardware:(BOOL)arg1 isHevc:(BOOL)arg2;
- (BOOL)isHardware;
- (void)setIsHardware:(BOOL)arg1;
- (BOOL)isHevc;
- (void)setIsHevc:(BOOL)arg1;
- (id)queue;
- (id)delegate;
- (BOOL)supportsSoftware;
- (BOOL)supportsHevc;
- (int)strategy;
- (void)setStrategy:(int)arg1;
- (BOOL)enablesHevc;
- (void)setEnablesHevc:(BOOL)arg1;
- (BOOL)enablesRps;
- (void)setEnablesRps:(BOOL)arg1;
- (BOOL)hardwareHevcError;
- (void)setHardwareHevcError:(BOOL)arg1;
- (BOOL)hardwareError;
- (void)setHardwareError:(BOOL)arg1;
- (id)encodeConfig;
- (BOOL)enablesRoi;
- (void)setEnablesRoi:(BOOL)arg1;
- (void).cxx_destruct;
@end

