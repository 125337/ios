@interface TXCVideoDecoderSupervisor : TXCVideoBindableObject <TXIVideoDecoderSupervisorInterface>
{
    BOOL _usesHevc; // +0x8
    BOOL _hasCustomDecoder; // +0x9
    BOOL _isHardwareFailed; // +0xa
    BOOL _isHardwareHevcFailed; // +0xb
    BOOL _isSoftwareHevcFailed; // +0xc
    int _strategy; // +0x10
    id <TXIVideoDecodeSupervisorDelegate> _delegate; // +0x18
    NSNumber * _isHardware; // +0x20
    TXCDispatchQueue * _decodeQueue; // +0x28
    TXCDroppableDispatcher * _outputDispatcher; // +0x30
}
+ (BOOL)supportsHevc;
+ (BOOL)supportsSoftwareCodec;
- (id)initWithDelegate:(id)arg1 decodeQueue:(id)arg2;
- (void)processVideoFrame:(id)arg1 onComplete:(id /* block */)arg2;
- (id)notifyError:(id)arg1 withFrame:(id)arg2;
- (void)reset;
- (int)decoderType;
- (long long)cachedFrameCount;
- (BOOL)updateStrategy:(id)arg1 error:(id *)arg2;
- (BOOL)forceHevc:(id *)arg1;
- (BOOL)forceHardware:(id *)arg1;
- (BOOL)forceSoftware:(id *)arg1;
- (BOOL)filterUnchanged:(BOOL)arg1 isHardware:(BOOL)arg2;
- (id)switchToSoftwareAfterHardwareFailure:(id)arg1;
- (BOOL)forceHevcWithHardware:(BOOL)arg1 error:(id *)arg2;
- (BOOL)preferHevcWithHardware:(BOOL)arg1 error:(id *)arg2;
- (BOOL)isHevcAvailableWithHardware:(BOOL)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)isHardware;
- (void)setIsHardware:(id)arg1;
- (BOOL)usesHevc;
- (void)setUsesHevc:(BOOL)arg1;
- (int)strategy;
- (void)setStrategy:(int)arg1;
- (BOOL)hasCustomDecoder;
- (void)setHasCustomDecoder:(BOOL)arg1;
- (BOOL)isHardwareFailed;
- (void)setIsHardwareFailed:(BOOL)arg1;
- (id)decodeQueue;
- (id)outputDispatcher;
- (BOOL)isHardwareHevcFailed;
- (void)setIsHardwareHevcFailed:(BOOL)arg1;
- (BOOL)isSoftwareHevcFailed;
- (void)setIsSoftwareHevcFailed:(BOOL)arg1;
- (void).cxx_destruct;
@end

