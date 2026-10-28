@interface IntelligentFaceClusterMessageItem : MMObject
{
    unsigned int _msgLocalId; // +0x8
    float _zScore; // +0xc
    NSString * _userName; // +0x10
    long long _faceLabelId; // +0x18
    NSString * _mediaFilePath; // +0x20
    CGRect _faceRect; // +0x28
}
- (void)copyFieldFromDbFaceClusterMessageItem:(id)arg1;
- (id)userName;
- (void)setUserName:(id)arg1;
- (unsigned int)msgLocalId;
- (void)setMsgLocalId:(unsigned int)arg1;
- (long long)faceLabelId;
- (void)setFaceLabelId:(long long)arg1;
- (float)zScore;
- (void)setZScore:(float)arg1;
- (CGRect)faceRect;
- (void)setFaceRect:(CGRect)arg1;
- (id)mediaFilePath;
- (void)setMediaFilePath:(id)arg1;
- (void).cxx_destruct;
@end
