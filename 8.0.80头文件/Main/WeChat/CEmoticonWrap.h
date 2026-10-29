@interface CEmoticonWrap : NSObject <PBCoding>
{
    BOOL _m_bCanDelete; // +0x8
    BOOL _m_isAsyncUpload; // +0x9
    BOOL _m_isRemoteRecommed; // +0xa
    BOOL _m_isLastSended; // +0xb
    BOOL _isReommandSearchWrap; // +0xc
    BOOL _recommendFromSelfRefresh; // +0xd
    BOOL _disableRecordSend; // +0xe
    unsigned int _m_uiType; // +0x10
    unsigned int _m_uiGameType; // +0x14
    unsigned int _m_lastUsedTime; // +0x18
    unsigned int _m_extFlag; // +0x1c
    unsigned int _m_storeUnique; // +0x20
    unsigned int _recommendEmojiFrom; // +0x24
    int _scene; // +0x28
    NSString * _m_nsAppID; // +0x30
    NSString * _m_nsThumbImgPath; // +0x38
    NSData * _m_imageData; // +0x40
    EmojiInfoObj * _m_emojiInfo; // +0x48
    NSString * _m_query; // +0x50
    unsigned long long _recommendRequestId; // +0x58
    NSString * _fromSearchKey; // +0x60
    NSString * _recommmendReason; // +0x68
}
+ (void)PBArrayAdd_m_uiType;
+ (void)PBArrayAdd_m_bCanDelete;
+ (void)PBArrayAdd_m_uiGameType;
+ (void)PBArrayAdd_m_nsAppID;
+ (void)PBArrayAdd_m_nsThumbImgPath;
+ (void)PBArrayAdd_m_lastUsedTime;
+ (void)PBArrayAdd_m_extFlag;
+ (void)PBArrayAdd_m_isAsyncUpload;
+ (void)PBArrayAdd_m_isRemoteRecommed;
+ (void)PBArrayAdd_m_isLastSended;
+ (void)PBArrayAdd_m_query;
+ (void)PBArrayAdd_m_emojiInfo;
+ (void)PBArrayAdd_m_storeUnique;
+ (void)PBArrayAdd_recommendRequestId;
+ (void)initialize;
- (id)finder_commonParams;
- (CGSize)emoticonSize;
- (id)getPBPropertyTable;
- (id)init;
- (id)initWithEmojiInfoObj:(id)arg1;
- (BOOL)isSelfieEmoticon;
- (id)description;
- (void)setM_uiType:(unsigned int)arg1;
- (unsigned int)m_uiType;
- (BOOL)m_bCanDelete;
- (void)setM_bCanDelete:(BOOL)arg1;
- (unsigned int)m_uiGameType;
- (void)setM_uiGameType:(unsigned int)arg1;
- (id)m_nsAppID;
- (void)setM_nsAppID:(id)arg1;
- (id)m_nsThumbImgPath;
- (void)setM_nsThumbImgPath:(id)arg1;
- (unsigned int)m_lastUsedTime;
- (void)setM_lastUsedTime:(unsigned int)arg1;
- (id)m_imageData;
- (void)setM_imageData:(id)arg1;
- (unsigned int)m_extFlag;
- (void)setM_extFlag:(unsigned int)arg1;
- (BOOL)m_isAsyncUpload;
- (void)setM_isAsyncUpload:(BOOL)arg1;
- (id)m_emojiInfo;
- (void)setM_emojiInfo:(id)arg1;
- (unsigned int)m_storeUnique;
- (void)setM_storeUnique:(unsigned int)arg1;
- (BOOL)m_isRemoteRecommed;
- (void)setM_isRemoteRecommed:(BOOL)arg1;
- (BOOL)m_isLastSended;
- (void)setM_isLastSended:(BOOL)arg1;
- (id)m_query;
- (void)setM_query:(id)arg1;
- (BOOL)isReommandSearchWrap;
- (void)setIsReommandSearchWrap:(BOOL)arg1;
- (unsigned int)recommendEmojiFrom;
- (void)setRecommendEmojiFrom:(unsigned int)arg1;
- (unsigned long long)recommendRequestId;
- (void)setRecommendRequestId:(unsigned long long)arg1;
- (BOOL)recommendFromSelfRefresh;
- (void)setRecommendFromSelfRefresh:(BOOL)arg1;
- (BOOL)disableRecordSend;
- (void)setDisableRecordSend:(BOOL)arg1;
- (id)fromSearchKey;
- (void)setFromSearchKey:(id)arg1;
- (id)recommmendReason;
- (void)setRecommmendReason:(id)arg1;
- (int)scene;
- (void)setScene:(int)arg1;
- (void).cxx_destruct;
@end
