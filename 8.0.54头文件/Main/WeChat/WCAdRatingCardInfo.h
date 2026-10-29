@interface WCAdRatingCardInfo : NSObject <NSCoding>
{
    NSString * _headTitle; // +0x8
    NSString * _headUrl; // +0x10
    NSArray * _tagList; // +0x18
    NSArray * _tagWithIconList; // +0x20
}
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)headTitle;
- (void)setHeadTitle:(id)arg1;
- (id)headUrl;
- (void)setHeadUrl:(id)arg1;
- (id)tagList;
- (void)setTagList:(id)arg1;
- (id)tagWithIconList;
- (void)setTagWithIconList:(id)arg1;
- (void).cxx_destruct;
@end

