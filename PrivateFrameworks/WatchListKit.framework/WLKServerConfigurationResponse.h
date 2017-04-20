/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
 */

@interface WLKServerConfigurationResponse : NSObject {
    NSDictionary * _dictionary;
    NSDictionary * _endpointsDictionary;
    unsigned int  _expirationInSeconds;
    NSArray * _orderedChannels;
    NSDictionary * _requiredRequestKeyValuePairsDictionary;
    NSDictionary * _serverRoutesDictionary;
}

@property (nonatomic, readonly) NSDictionary *dictionary;
@property (nonatomic, readonly) NSDictionary *endpointsDictionary;
@property (nonatomic, readonly) unsigned int expirationInSeconds;
@property (nonatomic, readonly, copy) NSArray *orderedChannels;
@property (nonatomic, readonly) NSDictionary *requiredRequestKeyValuePairsDictionary;
@property (nonatomic, readonly) NSDictionary *serverRoutesDictionary;

- (void).cxx_destruct;
- (id)dictionary;
- (id)endpointsDictionary;
- (unsigned int)expirationInSeconds;
- (id)init;
- (id)initWithDictionary:(id)arg1;
- (id)orderedChannels;
- (id)requiredRequestKeyValuePairsDictionary;
- (id)serverRoutesDictionary;

@end