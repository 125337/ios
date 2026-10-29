@interface MMListenVideoBgmListCgi : WCBaseCgi
{
    int _type; // +0x8
    int _businessId; // +0xc
    unsigned long long _videoDuration; // +0x10
    NSData * _classifyResultData; // +0x18
    unsigned long long _requireMusicCount; // +0x20
    NSData * _sessionBuffer; // +0x28
    NSArray * _miaojianMusicIds; // +0x30
    NSString * _miaojianTemplateId; // +0x38
    unsigned long long _finderEnterScene; // +0x40
    id /* block */ _successfulBlock; // +0x48
    id /* block */ _failedBlock; // +0x50
}
- (id)initWithSuccessfulBlock:(id /* block */)arg1 failed:(id /* block */)arg2;
- (void)start;
- (id)buildRequest;
- (void)didGetResponse:(id)arg1;
- (void)didFailWithError:(id)arg1 response:(id)arg2;
- (int)type;
- (void)setType:(int)arg1;
- (unsigned long long)videoDuration;
- (void)setVideoDuration:(unsigned long long)arg1;
- (int)businessId;
- (void)setBusinessId:(int)arg1;
- (id)classifyResultData;
- (void)setClassifyResultData:(id)arg1;
- (unsigned long long)requireMusicCount;
- (void)setRequireMusicCount:(unsigned long long)arg1;
- (id)sessionBuffer;
- (void)setSessionBuffer:(id)arg1;
- (id)miaojianMusicIds;
- (void)setMiaojianMusicIds:(id)arg1;
- (id)miaojianTemplateId;
- (void)setMiaojianTemplateId:(id)arg1;
- (unsigned long long)finderEnterScene;
- (void)setFinderEnterScene:(unsigned long long)arg1;
- (id /* block */)successfulBlock;
- (void)setSuccessfulBlock:(id /* block */)arg1;
- (id /* block */)failedBlock;
- (void)setFailedBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end
