@interface TXYCameraParam : NSObject
{
    BOOL _reset; // +0x8
    BOOL _needChangeZoom; // +0x9
    BOOL _needChangeExposure; // +0xa
    BOOL _needChangeWhiteBalance; // +0xb
    int _requestId; // +0xc
    int _zoom; // +0x10
    int _whiteBalance; // +0x14
    int _code; // +0x18
    int _version; // +0x1c
    int _exposureLock; // +0x20
    int _whiteBalanceLock; // +0x24
    NSString * _comment; // +0x28
    double _exposure; // +0x30
    NSString * _message; // +0x38
}
- (id)initWithDictionary:(id)arg1;
- (float)zoomValue;
- (int)whiteBalanceValue;
- (int)whiteBalanceValue:(int)arg1;
- (id)toString;
- (int)requestId;
- (void)setRequestId:(int)arg1;
- (id)comment;
- (void)setComment:(id)arg1;
- (BOOL)reset;
- (void)setReset:(BOOL)arg1;
- (BOOL)needChangeZoom;
- (void)setNeedChangeZoom:(BOOL)arg1;
- (BOOL)needChangeExposure;
- (void)setNeedChangeExposure:(BOOL)arg1;
- (BOOL)needChangeWhiteBalance;
- (void)setNeedChangeWhiteBalance:(BOOL)arg1;
- (double)exposure;
- (void)setExposure:(double)arg1;
- (int)zoom;
- (void)setZoom:(int)arg1;
- (int)whiteBalance;
- (void)setWhiteBalance:(int)arg1;
- (int)code;
- (void)setCode:(int)arg1;
- (id)message;
- (void)setMessage:(id)arg1;
- (int)version;
- (void)setVersion:(int)arg1;
- (int)exposureLock;
- (void)setExposureLock:(int)arg1;
- (int)whiteBalanceLock;
- (void)setWhiteBalanceLock:(int)arg1;
- (void).cxx_destruct;
@end
