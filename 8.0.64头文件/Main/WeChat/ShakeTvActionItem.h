@interface ShakeTvActionItem : NSObject <PBCoding, NSCoding, NSCopying>
{
    int _actionType; // +0x8
    NSString * _commentId; // +0x10
    NSString * _title; // +0x18
    NSString * _url; // +0x20
    NSString * _summary; // +0x28
    NSMutableArray * _thumbUrls; // +0x30
    ShakeUserItem * _userItem; // +0x38
    ShakePayItem * _payItem; // +0x40
    ShakeProductItem * _productItem; // +0x48
    ShakeUrlItem * _urlItem; // +0x50
}
+ (void)PBArrayAdd_actionType;
+ (void)PBArrayAdd_commentId;
+ (void)PBArrayAdd_title;
+ (void)PBArrayAdd_summary;
+ (void)PBArrayAdd_url;
+ (void)PBArrayAdd_thumbUrls;
+ (void)PBArrayAdd_userItem;
+ (void)PBArrayAdd_payItem;
+ (void)PBArrayAdd_productItem;
+ (void)PBArrayAdd_urlItem;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)init;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (int)actionType;
- (void)setActionType:(int)arg1;
- (id)commentId;
- (void)setCommentId:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)url;
- (void)setUrl:(id)arg1;
- (id)summary;
- (void)setSummary:(id)arg1;
- (id)thumbUrls;
- (void)setThumbUrls:(id)arg1;
- (id)userItem;
- (void)setUserItem:(id)arg1;
- (id)payItem;
- (void)setPayItem:(id)arg1;
- (id)productItem;
- (void)setProductItem:(id)arg1;
- (id)urlItem;
- (void)setUrlItem:(id)arg1;
- (void).cxx_destruct;
@end
