@interface SEWCUploadMedia : NSObject <NSCoding>
{
    NSString * serverID; // +0x8
    NSString * clientID; // +0x10
    long long type; // +0x18
    long long subType; // +0x20
    long long outType; // +0x28
    NSData * buffer; // +0x30
    BOOL isFinished; // +0x38
    WCUrl * bufferUrl; // +0x40
    WCUrl * lowBandUrl; // +0x48
    WCUrl * bufferDataUrl; // +0x50
    WCUrl * lowBandDataUrl; // +0x58
    NSMutableArray * thumbUrlsList; // +0x60
    CGSize imgSize; // +0x68
    NSString * title; // +0x78
    NSString * desc; // +0x80
    long long imageFrom; // +0x88
    long long imageFilterID; // +0x90
    BOOL isThumbForPrevMeida; // +0x98
    BOOL isSyncToWeibo; // +0x99
    BOOL isSyncToFacebook; // +0x9a
    BOOL isSyncToTwitter; // +0x9b
    BOOL isSyncToQZone; // +0x9c
    NSString * twitterOAuthToken; // +0xa0
    NSString * twitterOAuthTokenSecret; // +0xa8
    NSString * userData; // +0xb0
}
- (id)init;
- (id)getTypeName;
- (id)mediaBuffer;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)serverID;
- (void)setServerID:(id)arg1;
- (id)clientID;
- (void)setClientID:(id)arg1;
- (long long)type;
- (void)setType:(long long)arg1;
- (long long)subType;
- (void)setSubType:(long long)arg1;
- (long long)outType;
- (void)setOutType:(long long)arg1;
- (id)thumbUrlsList;
- (void)setThumbUrlsList:(id)arg1;
- (id)buffer;
- (void)setBuffer:(id)arg1;
- (BOOL)isFinished;
- (void)setIsFinished:(BOOL)arg1;
- (id)bufferUrl;
- (void)setBufferUrl:(id)arg1;
- (id)lowBandUrl;
- (void)setLowBandUrl:(id)arg1;
- (id)bufferDataUrl;
- (void)setBufferDataUrl:(id)arg1;
- (id)lowBandDataUrl;
- (void)setLowBandDataUrl:(id)arg1;
- (CGSize)imgSize;
- (void)setImgSize:(CGSize)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)desc;
- (void)setDesc:(id)arg1;
- (long long)imageFrom;
- (void)setImageFrom:(long long)arg1;
- (long long)imageFilterID;
- (void)setImageFilterID:(long long)arg1;
- (BOOL)isThumbForPrevMeida;
- (void)setIsThumbForPrevMeida:(BOOL)arg1;
- (BOOL)isSyncToWeibo;
- (void)setIsSyncToWeibo:(BOOL)arg1;
- (BOOL)isSyncToFacebook;
- (void)setIsSyncToFacebook:(BOOL)arg1;
- (BOOL)isSyncToTwitter;
- (void)setIsSyncToTwitter:(BOOL)arg1;
- (BOOL)isSyncToQZone;
- (void)setIsSyncToQZone:(BOOL)arg1;
- (id)twitterOAuthToken;
- (void)setTwitterOAuthToken:(id)arg1;
- (id)twitterOAuthTokenSecret;
- (void)setTwitterOAuthTokenSecret:(id)arg1;
- (id)userData;
- (void)setUserData:(id)arg1;
- (void).cxx_destruct;
@end

