@interface QMUClusterManager : NSObject <QMapViewDelegate, QMUClusterAlgorithmProtocol>
{
    double _distance; // +0x8
    id <QMUClusterProtocol> _delegate; // +0x10
    QMapView * _map; // +0x18
    QMUPointQuadTree * _tree; // +0x20
    NSMutableSet * _items; // +0x28
    QMUUnivisalClusterAlgorithm * _clusterStrategy; // +0x30
}
- (id)initWithMap:(id)arg1;
- (void)dealloc;
- (void)setDistance:(double)arg1;
- (void)setMap:(id)arg1;
- (void)setThresholdZoomlevel:(int)arg1;
- (int)thresholdZoomlevel;
- (void)onRegionChanged:(id)arg1;
- (void)refreshCluster;
- (BOOL)algorithm:(id)arg1 clusterAnnotation:(id)arg2 withAnnotation:(id)arg3;
- (void)addAnnotaion:(id)arg1;
- (void)removeAnnotations:(id)arg1;
- (void)removeAnnotaion:(id)arg1;
- (void)addAnnotations:(id)arg1;
- (void)clearAnnotations;
- (void)doAdd:(id)arg1;
- (void)doRemove:(id)arg1;
- (double)distance;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)map;
- (id)tree;
- (void)setTree:(id)arg1;
- (id)items;
- (void)setItems:(id)arg1;
- (id)clusterStrategy;
- (void)setClusterStrategy:(id)arg1;
- (void).cxx_destruct;
@end
