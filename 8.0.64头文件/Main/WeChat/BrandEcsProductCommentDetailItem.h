@interface BrandEcsProductCommentDetailItem : NSObject
{
    BrandEcsProductShareWeappItem * _fakeNativeWeAppItem; // +0x8
    NSString * _messageExtraData; // +0x10
}
+ (id)makeWithFakeNativeWeAppItem:(id)arg1 messageExtraData:(id)arg2;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)fakeNativeWeAppItem;
- (void)setFakeNativeWeAppItem:(id)arg1;
- (id)messageExtraData;
- (void)setMessageExtraData:(id)arg1;
- (void).cxx_destruct;
@end
