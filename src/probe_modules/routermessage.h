struct icmphdr_ip {
  u_int8_t  icmp_type;	/* type of message, see below */
  u_int8_t  icmp_code;	/* type sub code */
  u_int16_t icmp_cksum;	/* ones complement checksum of struct */
  u_int32_t icmp_ip_blank;	/* blank betweent icmp and ip */
#if __BYTE_ORDER == __LITTLE_ENDIAN
  unsigned int ip_hl:4;
  unsigned int ip_v:4;
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
  unsigned int ip_hl:4;
  unsigned int ip_v:4;
#endif
  u_int8_t ip_tos;
  u_short ip_len;
  u_short ip_id;
  u_short  ip_off;
  u_int8_t ip_ttl;
  u_short ip_sum;
  u_int32_t ip_src;
  u_int32_t ip_dst;
};
