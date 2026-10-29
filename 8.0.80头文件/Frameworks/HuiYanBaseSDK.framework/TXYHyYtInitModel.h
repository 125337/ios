@interface TXYHyYtInitModel : NSObject
{
    int _mode; // +0x8
    NSDictionary * _config; // +0x10
    NSString * _faceIdToken; // +0x18
    NSString * _pubKey; // +0x20
    NSString * _nonce; // +0x28
    NSString * _riskData; // +0x30
    NSString * _path; // +0x38
}
- (int)mode;
- (void)setMode:(int)arg1;
- (id)config;
- (void)setConfig:(id)arg1;
- (id)faceIdToken;
- (void)setFaceIdToken:(id)arg1;
- (id)pubKey;
- (void)setPubKey:(id)arg1;
- (id)nonce;
- (void)setNonce:(id)arg1;
- (id)riskData;
- (void)setRiskData:(id)arg1;
- (id)path;
- (void)setPath:(id)arg1;
- (void).cxx_destruct;
@end
