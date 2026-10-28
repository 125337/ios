@interface MMSearchEmotWrap : NSObject
{
    BOOL _disableAddSticker; // +0x8
    BOOL _isGenSticker; // +0x9
    unsigned int _searchScene; // +0xc
    unsigned int _type; // +0x10
    unsigned int _fromSearchType; // +0x14
    unsigned int _weappVersion; // +0x18
    NSString * _searchID; // +0x20
    NSString * _docID; // +0x28
    NSString * _title; // +0x30
    unsigned long long _sourceType; // +0x38
    NSString * _md5; // +0x40
    NSString * _encryptUrl; // +0x48
    NSString * _aesKey; // +0x50
    NSString * _thumbUrl; // +0x58
    NSString * _designerId; // +0x60
    NSString * _designerName; // +0x68
    NSString * _designerThumbUrl; // +0x70
    NSString * _productID; // +0x78
    NSString * _productName; // +0x80
    NSString * _productUrl; // +0x88
    NSString * _activityId; // +0x90
    NSString * _sourceUrl; // +0x98
    NSString * _sourceName; // +0xa0
    NSData * _imgData; // +0xa8
    NSString * _weappUsrName; // +0xb0
    NSString * _brandUserName; // +0xb8
}
- (id)emoticonWrap;
- (unsigned int)searchScene;
- (void)setSearchScene:(unsigned int)arg1;
- (id)searchID;
- (void)setSearchID:(id)arg1;
- (id)docID;
- (void)setDocID:(id)arg1;
- (unsigned int)type;
- (void)setType:(unsigned int)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (unsigned long long)sourceType;
- (void)setSourceType:(unsigned long long)arg1;
- (unsigned int)fromSearchType;
- (void)setFromSearchType:(unsigned int)arg1;
- (id)md5;
- (void)setMd5:(id)arg1;
- (id)encryptUrl;
- (void)setEncryptUrl:(id)arg1;
- (id)aesKey;
- (void)setAesKey:(id)arg1;
- (id)thumbUrl;
- (void)setThumbUrl:(id)arg1;
- (id)designerId;
- (void)setDesignerId:(id)arg1;
- (id)designerName;
- (void)setDesignerName:(id)arg1;
- (id)designerThumbUrl;
- (void)setDesignerThumbUrl:(id)arg1;
- (id)productID;
- (void)setProductID:(id)arg1;
- (id)productName;
- (void)setProductName:(id)arg1;
- (id)productUrl;
- (void)setProductUrl:(id)arg1;
- (id)activityId;
- (void)setActivityId:(id)arg1;
- (id)sourceUrl;
- (void)setSourceUrl:(id)arg1;
- (id)sourceName;
- (void)setSourceName:(id)arg1;
- (id)imgData;
- (void)setImgData:(id)arg1;
- (BOOL)disableAddSticker;
- (void)setDisableAddSticker:(BOOL)arg1;
- (BOOL)isGenSticker;
- (void)setIsGenSticker:(BOOL)arg1;
- (id)weappUsrName;
- (void)setWeappUsrName:(id)arg1;
- (unsigned int)weappVersion;
- (void)setWeappVersion:(unsigned int)arg1;
- (id)brandUserName;
- (void)setBrandUserName:(id)arg1;
- (void).cxx_destruct;
@end
