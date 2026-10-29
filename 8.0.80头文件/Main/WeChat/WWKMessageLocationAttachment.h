@interface WWKMessageLocationAttachment : WWKMessageAttachment
{
    NSString * _title; // +0x8
    NSString * _address; // +0x10
    double _lat; // +0x18
    double _lng; // +0x20
    double _zoom; // +0x28
}
- (id)initWithDict:(id)arg1;
- (id)writeToDict:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)address;
- (void)setAddress:(id)arg1;
- (double)lat;
- (void)setLat:(double)arg1;
- (double)lng;
- (void)setLng:(double)arg1;
- (double)zoom;
- (void)setZoom:(double)arg1;
- (void).cxx_destruct;
@end
