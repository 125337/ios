@interface DeviceRankLikeCellInfo : MMObject
{
    unsigned int uiScore; // +0x8
    unsigned int uiRankNum; // +0xc
    unsigned int uiLikeCount; // +0x10
    unsigned int uiLikeState; // +0x14
    NSString * nsUserName; // +0x18
    SportRecord * _record; // +0x20
}
- (id)nsUserName;
- (void)setNsUserName:(id)arg1;
- (unsigned int)uiScore;
- (void)setUiScore:(unsigned int)arg1;
- (unsigned int)uiRankNum;
- (void)setUiRankNum:(unsigned int)arg1;
- (unsigned int)uiLikeCount;
- (void)setUiLikeCount:(unsigned int)arg1;
- (unsigned int)uiLikeState;
- (void)setUiLikeState:(unsigned int)arg1;
- (id)record;
- (void)setRecord:(id)arg1;
- (void).cxx_destruct;
@end

