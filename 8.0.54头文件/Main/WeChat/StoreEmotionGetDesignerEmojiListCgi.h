@interface StoreEmotionGetDesignerEmojiListCgi : MMObject <PBMessageObserverDelegate>
{
    NSMutableArray * m_designerEmojiList; // +0x8
    unsigned int m_designerUin; // +0x10
    unsigned int m_opCode; // +0x14
    unsigned int m_tagId; // +0x18
    NSString * m_keyword; // +0x20
    unsigned long long m_searchId; // +0x28
    EmotionBannerSet * m_bannerSet; // +0x30
    SKBuiltinBuffer_t * m_pageBuf; // +0x38
    BOOL m_hasMore; // +0x40
    BOOL m_isNoSuchProduct; // +0x41
    unsigned int m_eventID; // +0x44
    id <StoreEmotionGetDesignerEmojiListCgiDelegate> _delegate; // +0x48
}
- (id)emojiList;
- (BOOL)isRequesting;
- (id)init;
- (id)initWithDesignerUin:(unsigned int)arg1;
- (id)initWithKeyword:(id)arg1 searchId:(unsigned long long)arg2;
- (id)initWithTagId:(unsigned int)arg1;
- (id)initWithBannerSet:(id)arg1;
- (BOOL)startRequest;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)callFailedDelegate;
- (BOOL)hasMore;
- (BOOL)isNoSuchProduct;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end

