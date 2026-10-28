@interface WSTabInfo : NSObject <NSCopying>
{
    int _finderCommentScene; // +0x8
    int _finderTabType; // +0xc
    NSDictionary * _originalDictionary; // +0x10
    long long _category; // +0x18
    unsigned long long _bizType; // +0x20
    unsigned long long _searchScene; // +0x28
    unsigned long long _searchType; // +0x30
    NSString * _reddotPath; // +0x38
    NSString * _title; // +0x40
    NSString * _extTabInfo; // +0x48
    NSString * _liteAppId; // +0x50
    NSString * _liteAppPage; // +0x58
    WSReddot * _entranceRedDotInfo; // +0x60
    NSString * _liteAppExpKey; // +0x68
}
- (id)currentUniformEntranceReddot;
- (id)initWithParams:(id)arg1;
- (id)copyWithZone:(_NSZone *)arg1;
- (BOOL)useLiteApp;
- (id)titleFromK1KConfig:(id)arg1;
- (id)description;
- (id)originalDictionary;
- (void)setOriginalDictionary:(id)arg1;
- (long long)category;
- (void)setCategory:(long long)arg1;
- (unsigned long long)bizType;
- (void)setBizType:(unsigned long long)arg1;
- (unsigned long long)searchScene;
- (void)setSearchScene:(unsigned long long)arg1;
- (unsigned long long)searchType;
- (void)setSearchType:(unsigned long long)arg1;
- (id)reddotPath;
- (void)setReddotPath:(id)arg1;
- (int)finderCommentScene;
- (void)setFinderCommentScene:(int)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (int)finderTabType;
- (void)setFinderTabType:(int)arg1;
- (id)extTabInfo;
- (void)setExtTabInfo:(id)arg1;
- (id)liteAppId;
- (void)setLiteAppId:(id)arg1;
- (id)liteAppPage;
- (void)setLiteAppPage:(id)arg1;
- (id)entranceRedDotInfo;
- (void)setEntranceRedDotInfo:(id)arg1;
- (id)liteAppExpKey;
- (void)setLiteAppExpKey:(id)arg1;
- (void).cxx_destruct;
@end
