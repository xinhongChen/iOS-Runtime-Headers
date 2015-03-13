/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@class NSString;

@interface AFApplicationInfo : NSObject <NSSecureCoding> {
    NSString *_identifier;
    int _pid;
}

@property(copy) NSString * identifier;
@property int pid;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (int)pid;
- (void)setIdentifier:(id)arg1;
- (void)setPid:(int)arg1;

@end