@interface WCFinderTopicListParamsModel : NSObject
{
    int _topicType; // +0x8
    int _tabType; // +0xc
    int _innerTabType; // +0x10
    int _fromType; // +0x14
    int _commentScene; // +0x18
    int _rollDirection; // +0x1c
    int _mediaTabType; // +0x20
    int _prefetchType; // +0x24
    NSString * _topicStr; // +0x28
    NSData * _lastBuffer; // +0x30
    NSString * _latitude; // +0x38
    NSString * _longitude; // +0x40
    NSString * _refObjectid; // +0x48
    WCFinderTopicInfo * _poiTopicRecommend; // +0x50
    WCFinderSectionInfo * _sectionInfo; // +0x58
    FinderClientStatus * _clientStatus; // +0x60
    unsigned long long _topicId; // +0x68
    NSData * _topicBuffer; // +0x70
    NSString * _encryptedTopicID; // +0x78
    NSData * _byPassInfo; // +0x80
    NSString * _finderUsername; // +0x88
    FinderNextObjectInfo * _nextObjectInfo; // +0x90
}
+ (id)genFetchTabDataArrayByTopicType:(int)arg1 refObjectid:(id)arg2 innerTabType:(int)arg3 topicId:(unsigned long long)arg4 commentScene:(int)arg5 encryptedTopicID:(id)arg6 byPassInfo:(id)arg7 rollDirection:(int)arg8 lastBuffer:(id)arg9;
- (id)printErrMsg;
- (int)topicType;
- (void)setTopicType:(int)arg1;
- (id)topicStr;
- (void)setTopicStr:(id)arg1;
- (id)lastBuffer;
- (void)setLastBuffer:(id)arg1;
- (id)latitude;
- (void)setLatitude:(id)arg1;
- (id)longitude;
- (void)setLongitude:(id)arg1;
- (id)refObjectid;
- (void)setRefObjectid:(id)arg1;
- (int)tabType;
- (void)setTabType:(int)arg1;
- (int)innerTabType;
- (void)setInnerTabType:(int)arg1;
- (int)fromType;
- (void)setFromType:(int)arg1;
- (id)poiTopicRecommend;
- (void)setPoiTopicRecommend:(id)arg1;
- (id)sectionInfo;
- (void)setSectionInfo:(id)arg1;
- (id)clientStatus;
- (void)setClientStatus:(id)arg1;
- (unsigned long long)topicId;
- (void)setTopicId:(unsigned long long)arg1;
- (id)topicBuffer;
- (void)setTopicBuffer:(id)arg1;
- (id)encryptedTopicID;
- (void)setEncryptedTopicID:(id)arg1;
- (int)commentScene;
- (void)setCommentScene:(int)arg1;
- (id)byPassInfo;
- (void)setByPassInfo:(id)arg1;
- (int)rollDirection;
- (void)setRollDirection:(int)arg1;
- (id)finderUsername;
- (void)setFinderUsername:(id)arg1;
- (int)mediaTabType;
- (void)setMediaTabType:(int)arg1;
- (int)prefetchType;
- (void)setPrefetchType:(int)arg1;
- (id)nextObjectInfo;
- (void)setNextObjectInfo:(id)arg1;
- (void).cxx_destruct;
@end

