@interface EditSingleVideoAttr : MMObject <NSCoding>
{
    NSString * _assetURL; // +0x8
    struct _originDuration; // +0x10
    struct _editedTimeRange; // +0x28
}
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (struct)originTimeRange;
- (void)resetEditTimeRange;
- (BOOL)isRangeEdited;
- (double)durationInSecond;
- (double)cropTimeDurationInSecond;
- (id)assetURL;
- (void)setAssetURL:(id)arg1;
- (struct)originDuration;
- (void)setOriginDuration:(struct)arg1;
- (struct)editedTimeRange;
- (void)setEditedTimeRange:(struct)arg1;
- (void).cxx_destruct;
@end

