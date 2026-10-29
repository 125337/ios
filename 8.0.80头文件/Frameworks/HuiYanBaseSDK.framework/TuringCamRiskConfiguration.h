@interface TuringCamRiskConfiguration : NSObject
{
    int _channelID; // +0x8
    NSString * _URLForTarsServer; // +0x10
    NSString * _valificationFilePath; // +0x18
    NSString * _faceIdToken; // +0x20
}
- (id)initPrivate;
- (int)channelID;
- (void)setChannelID:(int)arg1;
- (id)URLForTarsServer;
- (void)setURLForTarsServer:(id)arg1;
- (id)valificationFilePath;
- (void)setValificationFilePath:(id)arg1;
- (id)faceIdToken;
- (void)setFaceIdToken:(id)arg1;
- (void).cxx_destruct;
@end
